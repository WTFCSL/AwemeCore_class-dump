//
//     Generated by private class-dump
//

@protocol YataInstanceInnerInterface;

@interface YataModule : NSObject {
    id<YataInstanceInnerInterface> _yataInstance;
}

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)initWithYataInstance:(id)arg0;
- (id)yataInstance;
- (void)setYataInstance:(id)arg0;
- (void).cxx_destruct;

@end