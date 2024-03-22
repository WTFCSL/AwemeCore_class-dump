//
//     Generated by private class-dump
//

@class NSString, UIView;

@protocol IESLiveLayoutContainer <NSObject>

@property (readonly, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) NSString *containerType;

- (void)addSubview:(id)arg0 viewType:(id)arg1;
- (id)viewForType:(id)arg0;
- (void)addPluginview:(id)arg0;
- (void)addSubview:(id)arg0 viewType:(id)arg1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)addSubview:(id)arg0 viewType:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)addSubview:(id)arg0 viewType:(id)arg1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2;
- (BOOL)canInsertType:(id)arg0;
- (id)view;
- (id)itemForType:(id)arg0;
- (BOOL)containsType:(id)arg0;
- (void)removeType:(id)arg0;

@optional

- (id)containerType;

@end
