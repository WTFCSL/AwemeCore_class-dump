//
//     Generated by private class-dump
//

@class NLESingleSlotMattingTask_OC;

@interface ACCCutSameMattingManager : NSObject {
    NLESingleSlotMattingTask_OC *_mattingTask;
}

@property (retain, nonatomic) NLESingleSlotMattingTask_OC *mattingTask;

- (void)cancelCurrentTask;
- (BOOL)createSingleMattingTask:(id)arg0 model:(id)arg1 draftFolder:(id)arg2 currentAsset:(id)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)mattingTask;
- (void)setMattingTask:(id)arg0;
- (void).cxx_destruct;

@end