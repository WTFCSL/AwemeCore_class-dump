//
//     Generated by private class-dump
//

@interface LynxImageLoader : NSObject

+ (id)sharedInstance;

- (id /* block */)loadImageFromURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 contextInfo:(id)arg2 processors:(id)arg3 imageFetcher:(id)arg4 completed:(id /* block */)arg5;
- (id /* block */)loadCanvasImageFromURL:(id)arg0 contextInfo:(id)arg1 processors:(id)arg2 imageFetcher:(id)arg3 completed:(id /* block */)arg4;

@end