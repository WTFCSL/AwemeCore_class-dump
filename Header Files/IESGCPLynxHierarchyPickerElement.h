//
//     Generated by private class-dump
//

@class IESGCPHierarchyPickerView;

@interface IESGCPLynxHierarchyPickerElement : LynxUI {
    IESGCPHierarchyPickerView *_pickerView;
}

@property (retain, nonatomic) IESGCPHierarchyPickerView *pickerView;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__442;
+ (id)__lynx_prop_config__401;

- (void)pickerSelectFinishedWithCancel:(BOOL)arg0 selectedLeafItem:(id)arg1;
- (void)title:(id)arg0 requestReset:(BOOL)arg1;
- (void)items:(id)arg0 requestReset:(BOOL)arg1;
- (void).cxx_destruct;
- (id)pickerView;
- (void)setPickerView:(id)arg0;
- (id)createView;

@end