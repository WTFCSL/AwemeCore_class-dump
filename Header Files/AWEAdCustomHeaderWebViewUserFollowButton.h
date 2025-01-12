//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UILabel;

@interface AWEAdCustomHeaderWebViewUserFollowButton : UIView {
    UILabel *_textLabel;
    UIImageView *_followIcon;
    AWEAwemeModel *_awemeModel;
    id /* block */ _followedCompletion;
    NSString *_barType;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *followIcon;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ followedCompletion;
@property (copy, nonatomic) NSString *barType;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)updateFollowStatus;
- (void)setupUIWithModel:(id)arg0;
- (void)setBarType:(id)arg0;
- (void)setFollowedCompletion:(id /* block */)arg0;
- (id)followIcon;
- (void)followUserIfNeed;
- (void)updateViewWithFollowedStatus;
- (void)updateViewWithUnFollowStatus;
- (id /* block */)followedCompletion;
- (void)setFollowIcon:(id)arg0;
- (id)initWithModel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)barType;
- (void)setTextLabel:(id)arg0;

@end
