//
//     Generated by private class-dump
//

@protocol IESSCAudioProcessingNode <NSObject>

- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)arg0 renderInfo:(id)arg1;

@optional

- (void)audioTapWillDealloc;

@end