//
//     Generated by private class-dump
//

@class NSString, AWERTVInteractionUserProfileStatisticViewModel;

@interface AWERTVInteractionUserProfileStatisticView : UIView {
    NSString *_praise;
    NSString *_fans;
    NSString *_following;
    AWERTVInteractionUserProfileStatisticViewModel *_model;
}

@property (copy, nonatomic) NSString *praise;
@property (copy, nonatomic) NSString *fans;
@property (copy, nonatomic) NSString *following;
@property (retain, nonatomic) AWERTVInteractionUserProfileStatisticViewModel *model;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__setupViews;
- (id)praise;
- (void)setPraise:(id)arg0;
- (id)fans;
- (void)setFans:(id)arg0;
- (id)__createViewWithPrefix:(id)arg0 text:(id)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)following;
- (void)setFollowing:(id)arg0;

@end
