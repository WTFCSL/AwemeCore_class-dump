//
//     Generated by private class-dump
//

@class AFDEffectListModel, NSString, AFDBirthdayPopup;

@interface AFDBirthdayPopupController : UIViewController <AFDBirthdayPopupProtocol> {
    AFDBirthdayPopup *_popupView;
    AFDEffectListModel *_model;
    NSString *_enterFrom;
}

@property (retain, nonatomic) AFDBirthdayPopup *popupView;
@property (retain, nonatomic) AFDEffectListModel *model;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)show:(id)arg0 enterFrom:(id)arg1;
+ (void)dismiss;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setPopupView:(id)arg0;
- (id)popupView;
- (void)setModel:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)appDidBecomeActive:(id)arg0;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (void)appWillResignActive:(id)arg0;
- (void)addObservers;

@end
