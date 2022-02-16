// Copyright (c) 2021 homuler
//
// Use of this source code is governed by an MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Mediapipe.Unity
{
  public abstract class Solution : MonoBehaviour
  {
#pragma warning disable IDE1006
    // TODO: make it static
    protected virtual string TAG => GetType().Name;
#pragma warning restore IDE1006

    protected Bootstrap bootstrap;
    protected bool isPaused;
    protected DD_DataDiagram dataDiagram;
    // Variables for plotting line graph.
    List<GameObject> lineList = new List<GameObject>();
    private float h = 0;

    protected virtual IEnumerator Start()
    {
      var bootstrapObj = GameObject.Find("Bootstrap");

      if (bootstrapObj == null)
      {
        Logger.LogError(TAG, "Bootstrap is not found. Please play 'Start Scene' first");
        yield break;
      }

      bootstrap = bootstrapObj.GetComponent<Bootstrap>();

      var dataDiagramObj = GameObject.Find("DataDiagram");
      if(null == dataDiagramObj) {
          Logger.LogError(TAG, "Cannot find a GameObject of DataDiagram");
          yield break;
      }
      dataDiagram = dataDiagramObj.GetComponent<DD_DataDiagram>();
      dataDiagram.PreDestroyLineEvent += (s, e) => { lineList.Remove(e.line); };
      AddALine();

      yield return new WaitUntil(() => bootstrap.isFinished);

      Play();
    }

    /// <summary>
    ///   Start the main program from the beginning.
    /// </summary>
    public virtual void Play()
    {
      isPaused = false;
    }

    /// <summary>
    ///   Pause the main program.
    /// <summary>
    public virtual void Pause()
    {
      isPaused = true;
    }

    /// <summary>
    ///    Resume the main program.
    ///    If the main program has not begun, it'll do nothing.
    /// </summary>
    public virtual void Resume()
    {
      isPaused = false;
    }

    /// <summary>
    ///   Stops the main program.
    /// </summary>
    public virtual void Stop()
    {
      isPaused = true;
    }

    protected void AddALine() {
      if (null == dataDiagram)
          return;

      Color color = Color.HSVToRGB((h += 0.1f) > 1 ? (h - 1) : h, 0.8f, 0.8f);
      GameObject line = dataDiagram.AddLine(color.ToString(), color);
      if (null != line)
          lineList.Add(line);
    }

    public void OnRectChange() {
      if (null == dataDiagram)
          return;

      UnityEngine.Rect rect = new UnityEngine.Rect(Random.value * UnityEngine.Screen.width, Random.value * UnityEngine.Screen.height,
          Random.value * UnityEngine.Screen.width / 2, Random.value * UnityEngine.Screen.height / 2);

      dataDiagram.rect = rect;
    }

    protected void UpdateDatagram(float new_intensity_value) {
      // Update datagram graph with new intensity value.    
    }

    protected static void SetupAnnotationController<T>(AnnotationController<T> annotationController, ImageSource imageSource, bool expectedToBeMirrored = false) where T : HierarchicalAnnotation
    {
      annotationController.isMirrored = expectedToBeMirrored ^ imageSource.isHorizontallyFlipped ^ imageSource.isFrontFacing;
      annotationController.rotationAngle = imageSource.rotation.Reverse();
    }

    protected static void ReadFromImageSource(ImageSource imageSource, TextureFrame textureFrame)
    {
      var sourceTexture = imageSource.GetCurrentTexture();

      // For some reason, when the image is coiped on GPU, latency tends to be high.
      // So even when OpenGL ES is available, use CPU to copy images.
      var textureType = sourceTexture.GetType();

      if (textureType == typeof(WebCamTexture))
      {
        textureFrame.ReadTextureFromOnCPU((WebCamTexture)sourceTexture);
      }
      else if (textureType == typeof(Texture2D))
      {
        textureFrame.ReadTextureFromOnCPU((Texture2D)sourceTexture);
      }
      else
      {
        textureFrame.ReadTextureFromOnCPU(sourceTexture);
      }
    }
  }
}
