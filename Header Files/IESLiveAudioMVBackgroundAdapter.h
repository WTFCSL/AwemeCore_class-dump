//
//     Generated by private class-dump
//

@class IESLiveAudioBackgroundBaseModel;

@interface IESLiveAudioMVBackgroundAdapter : NSObject {
    IESLiveAudioBackgroundBaseModel *_dataModel;
    id /* block */ _firstRenderBlock;
}

@property (copy, nonatomic) id /* block */ firstRenderBlock;
@property (retain, nonatomic) IESLiveAudioBackgroundBaseModel *dataModel;

- (id /* block */)firstRenderBlock;
- (void)setFirstRenderBlock:(id /* block */)arg0;
- (void)updateMVBackground:(id)arg0;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end
