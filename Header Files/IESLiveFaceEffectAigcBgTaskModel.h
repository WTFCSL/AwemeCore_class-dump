//
//     Generated by private class-dump
//

@class NSString, AigcEffectTaskData;

@interface IESLiveFaceEffectAigcBgTaskModel : NSObject {
    NSString *_effectId;
    AigcEffectTaskData *_finishedTask;
    AigcEffectTaskData *_progressingTask;
}

@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) AigcEffectTaskData *finishedTask;
@property (retain, nonatomic) AigcEffectTaskData *progressingTask;

- (id)finishedTask;
- (void)setFinishedTask:(id)arg0;
- (id)progressingTask;
- (void)setProgressingTask:(id)arg0;
- (void).cxx_destruct;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end