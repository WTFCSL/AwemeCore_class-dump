//
//     Generated by private class-dump
//

@class AWEAdFeedCommentViewController, NSString, AWEAwemeModel, UILabel;

@interface AWEAdCommentSheetViewController : UIViewController <AWEAdCommentSheetViewController> {
    AWEAwemeModel *_awemeModel;
    UILabel *_commentCountLabel;
    AWEAdFeedCommentViewController *_feedCommentViewController;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) AWEAdFeedCommentViewController *feedCommentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showOnViewController:(id)arg0 awemeModel:(id)arg1;

- (id)awemeModel;
- (id)initWithAweme:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)configViews;
- (id)feedCommentViewController;
- (id)commentCountLabel;
- (void)onAWEUIThemeChangeNotification;
- (void)setCommentCountLabel:(id)arg0;
- (void)setFeedCommentViewController:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end