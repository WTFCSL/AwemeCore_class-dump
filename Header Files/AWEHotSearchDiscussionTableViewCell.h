//
//     Generated by private class-dump
//

@class AWEAwemeDetailCellViewController, UIViewController, NSString;

@interface AWEHotSearchDiscussionTableViewCell : AWEAwemeDetailTableViewCell {
    AWEAwemeDetailCellViewController *_viewController;
    UIViewController *_parentVC;
    double _defaultSeekToTime;
    NSString *_previousPage;
}

+ (id)reuseIdentifierWithMediaType:(long long)arg0;

- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (BOOL)shouldHideMusicInfo;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end