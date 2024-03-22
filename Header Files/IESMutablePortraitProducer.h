//
//     Generated by private class-dump
//

@class IESPortraitProducerDataManager;

@interface IESMutablePortraitProducer : IESPortraitProducer {
    IESPortraitProducerDataManager *_dataManager;
}

@property (retain, nonatomic) IESPortraitProducerDataManager *dataManager;

- (void)updatePortrait:(id)arg0 value:(id)arg1;
- (void)updatePortraitsWithDict:(id)arg0;
- (void)configPortraitKey:(id)arg0 config:(id)arg1;
- (id)dataManager;
- (BOOL)containsKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setDataManager:(id)arg0;

@end