//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, NSString;
@protocol AWESearchSugViewControllerProtocol;

@interface AWEStudioMusicSearchSugViewController : NSObject <ACCMusicSearchSugViewControllerProtocol> {
    BOOL whiteStyle;
    unsigned long long currentTabType;
    NSDictionary *logAdditionParams;
    id /* block */ sugComplementTapBlock;
    id /* block */ sugTapBlock;
    UIViewController<AWESearchSugViewControllerProtocol> *_targetViewController;
}

@property (copy, nonatomic) UIViewController<AWESearchSugViewControllerProtocol> *targetViewController;
@property (copy, nonatomic) id /* block */ sugTapBlock;
@property (copy, nonatomic) id /* block */ sugComplementTapBlock;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (nonatomic) unsigned long long currentTabType;
@property (copy, nonatomic) NSDictionary *logAdditionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetViewController;
- (void)setSugTapBlock:(id /* block */)arg0;
- (void)setCurrentTabType:(unsigned long long)arg0;
- (unsigned long long)currentTabType;
- (BOOL)isWhiteStyle;
- (void)setWhiteStyle:(BOOL)arg0;
- (id)logAdditionParams;
- (id /* block */)sugTapBlock;
- (id /* block */)sugComplementTapBlock;
- (void)trackSearchButtonClickReturnWithQuery:(id)arg0;
- (void)setLogAdditionParams:(id)arg0;
- (void)setSugComplementTapBlock:(id /* block */)arg0;
- (void)setTargetViewController:(id)arg0;
- (void)fetchSugWithQuery:(id)arg0 tabType:(unsigned long long)arg1;
- (void)setViewHidden:(BOOL)arg0;
- (id)targetSugVC;
- (void).cxx_destruct;
- (id)view;
- (void)setBackgroundColor:(id)arg0;

@end
