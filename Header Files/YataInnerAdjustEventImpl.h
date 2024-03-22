//
//     Generated by private class-dump
//

@class NSString;
@protocol YataInstanceInnerInterface;

@interface YataInnerAdjustEventImpl : NSObject <YataInnerEventDelegate> {
    id<YataInstanceInnerInterface> _yataInstance;
}

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithYataInstance:(id)arg0;
- (id)yataInstance;
- (void)setYataInstance:(id)arg0;
- (void)triggerEventWithEventData:(id)arg0;
- (void).cxx_destruct;

@end
