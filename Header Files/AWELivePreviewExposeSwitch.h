//
//     Generated by private class-dump
//

@class NSString;

@interface AWELivePreviewExposeSwitch : MTLModel <MTLJSONSerializing> {
    int _title;
    int _previewGuide;
    int _dynamicLabel;
    int _assistLabel;
    int _extendArea;
}

@property (nonatomic) int title;
@property (nonatomic) int previewGuide;
@property (nonatomic) int dynamicLabel;
@property (nonatomic) int assistLabel;
@property (nonatomic) int extendArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)assistLabel;
- (void)setAssistLabel:(int)arg0;
- (void)setDynamicLabel:(int)arg0;
- (int)previewGuide;
- (int)extendArea;
- (void)setPreviewGuide:(int)arg0;
- (void)setExtendArea:(int)arg0;
- (int)title;
- (void)setTitle:(int)arg0;
- (int)dynamicLabel;

@end
