//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, UIViewController;

@interface AWEAwemeOfflineBottomBarContext : NSObject <AWEAwemeDetailBottomBarCommonContextProtocol> {
    BOOL _enterEcomLiveVideoHybrid;
    NSString *_previousPage;
    NSString *_referString;
    NSString *_enterFrom;
    AWEAwemeModel *_awemeModel;
    UIViewController *_viewController;
    NSDictionary *_liteTaskInfo;
    NSDictionary *_logExtraDict;
    NSDictionary *_businessDict;
}

@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enterEcomLiveVideoHybrid;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *liteTaskInfo;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *businessDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)businessDict;
- (void)setBusinessDict:(id)arg0;
- (void)setEnterEcomLiveVideoHybrid:(BOOL)arg0;
- (BOOL)enterEcomLiveVideoHybrid;
- (id)liteTaskInfo;
- (void)setLiteTaskInfo:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
