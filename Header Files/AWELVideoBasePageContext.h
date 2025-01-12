//
//     Generated by private class-dump
//

@class NSString, UIViewController, NSDictionary;

@interface AWELVideoBasePageContext : AWEPageContext {
    BOOL _isOnFeedSharePanel;
    NSString *_enterFrom;
    NSString *_fromPage;
    UIViewController *_container;
    NSString *_homepageType;
    NSDictionary *_trackCommonParams;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isOnFeedSharePanel;
@property (copy, nonatomic) NSString *homepageType;
@property (copy, nonatomic) NSDictionary *trackCommonParams;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setFromPage:(id)arg0;
- (void)setTrackCommonParams:(id)arg0;
- (id)trackCommonParams;
- (BOOL)isOnFeedSharePanel;
- (void)setIsOnFeedSharePanel:(BOOL)arg0;
- (id)homepageType;
- (void)setHomepageType:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)fromPage;

@end
