//
//     Generated by private class-dump
//

@class HTSLiveToolbarItem, NSString, IESLivePopularBoxApi;

@interface IESLivePopularBoxFragment : IESLiveRoomComponent {
    HTSLiveToolbarItem *_popularBoxItem;
    NSString *_popularBoxSchema;
    IESLivePopularBoxApi *_api;
}

@property (retain, nonatomic) HTSLiveToolbarItem *popularBoxItem;
@property (copy, nonatomic) NSString *popularBoxSchema;
@property (retain, nonatomic) IESLivePopularBoxApi *api;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentCreate;
- (void)componentMount;
- (void)addToolbarItem;
- (id)popularBoxItem;
- (BOOL)popularBoxMoreToolbarReddotShowed;
- (id)popularBoxSchema;
- (void)popularBoxItemDidClick;
- (void)popularBoxItemDidShow;
- (void)setPopularBoxItem:(id)arg0;
- (void)setPopularBoxSchema:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
