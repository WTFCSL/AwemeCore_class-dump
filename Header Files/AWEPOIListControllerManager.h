//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEPOIListControllerManager : NSObject {
    NSMutableArray *_controllersArray;
}

@property (retain, nonatomic) NSMutableArray *controllersArray;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)listAnchorControllerDidSetupPopupViewController:(id)arg0;
- (void)listAnchorControllerDidClosePopupViewController:(id)arg0;
- (id)controllersArray;
- (BOOL)isShowingListAnchorPopupViewController;
- (void)setControllersArray:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
