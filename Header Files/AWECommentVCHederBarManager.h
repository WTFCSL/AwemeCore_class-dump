//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable;

@interface AWECommentVCHederBarManager : NSObject {
    NSMutableDictionary *_componentCtrlDict;
    NSMapTable *_contextTable;
}

@property (retain, nonatomic) NSMutableDictionary *componentCtrlDict;
@property (retain, nonatomic) NSMapTable *contextTable;

+ (BOOL)handleLeftContainerEnable;
+ (unsigned long long)barTypeByElementName:(id)arg0;
+ (BOOL)shouldShowCommentVCHeaderBar:(id)arg0;
+ (BOOL)shouldShowMaskVCHeaderBar:(id)arg0;
+ (BOOL)shouldHideForComponentCtrl:(id)arg0 barType:(unsigned long long)arg1 model:(id)arg2;
+ (void)handleCommentVCHeaderBarAppearByContext:(id)arg0 bottomContainer:(id)arg1 leftContainer:(id)arg2 isNew:(BOOL)arg3;
+ (id)sharedInstance;

- (id)componentCtrlDict;
- (id)contextTable;
- (void)setComponentCtrlDict:(id)arg0;
- (void)setContextTable:(id)arg0;
- (void).cxx_destruct;

@end
