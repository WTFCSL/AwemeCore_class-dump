//
//     Generated by private class-dump
//

@interface IESGCPBaseWidget : NSObject {
    long long _scene;
}

@property (nonatomic) long long scene;

+ (BOOL)widgetShouldBeActivated;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)widgetBindService;
- (id)initWithScene:(long long)arg0;
- (void)setScene:(long long)arg0;
- (long long)scene;

@end
