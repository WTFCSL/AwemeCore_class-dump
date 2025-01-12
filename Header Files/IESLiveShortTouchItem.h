//
//     Generated by private class-dump
//

@class UIControl, NSString, UIView, NSNumber;
@protocol IESLivePluginLayoutViewAdapter;

@interface IESLiveShortTouchItem : IESLiveDynamicModel <IESLiveMixShortTouchItem> {
    BOOL _shouldShowTempStateWidth;
    UIView *_entranceView;
    id /* block */ _iconAppearAction;
    id /* block */ _itemInsertCompletion;
    NSString *_name;
    NSString *_accessibleName;
    id /* block */ _triggerTempStateShow;
    id /* block */ _triggerNormalStateShow;
    long long _tempStateTriggerDuration;
    long long _tempStatePriority;
    double _tempStateTriggerTime;
}

@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) UIControl *control;
@property (retain, nonatomic) UIView<IESLivePluginLayoutViewAdapter> *view;
@property (retain, nonatomic) UIView *entranceView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL hadShowAlphaAnim;
@property (nonatomic) BOOL enableShorTouchNewAnimation;
@property (nonatomic) BOOL useEntranceAnimation;
@property (nonatomic) unsigned long long configurableType;
@property (copy, nonatomic) id /* block */ iconAppearAction;
@property (copy, nonatomic) id /* block */ itemInsertCompletion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *accessibleName;
@property (copy, nonatomic) id /* block */ triggerTempStateShow;
@property (copy, nonatomic) id /* block */ triggerNormalStateShow;
@property (nonatomic) long long tempStateTriggerDuration;
@property (nonatomic) long long tempStatePriority;
@property (nonatomic) BOOL shouldShowTempStateWidth;
@property (nonatomic) double tempStateTriggerTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)setTempStateTriggerDuration:(long long)arg0;
- (void)setTriggerTempStateShow:(id /* block */)arg0;
- (void)setTriggerNormalStateShow:(id /* block */)arg0;
- (BOOL)shouldShowTempStateWidth;
- (id /* block */)iconAppearAction;
- (void)bindingAction;
- (void)setIconAppearAction:(id /* block */)arg0;
- (id)accessibleName;
- (id /* block */)triggerTempStateShow;
- (id /* block */)triggerNormalStateShow;
- (long long)tempStateTriggerDuration;
- (long long)tempStatePriority;
- (void)setTempStatePriority:(long long)arg0;
- (void)setShouldShowTempStateWidth:(BOOL)arg0;
- (double)tempStateTriggerTime;
- (void)setTempStateTriggerTime:(double)arg0;
- (id /* block */)itemInsertCompletion;
- (void)setItemInsertCompletion:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setPriority:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)setName:(id)arg0;
- (void)didAppear;
- (id)priority;
- (id)name;
- (void)setAccessibleName:(id)arg0;

@end
