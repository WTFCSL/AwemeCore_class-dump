//
//     Generated by private class-dump
//

@class IESMutablePortraitProducer;

@interface IESCommonClientPortraitProducer : NSObject {
    IESMutablePortraitProducer *_delegate;
}

@property (retain, nonatomic) IESMutablePortraitProducer *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
