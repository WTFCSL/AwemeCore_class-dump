//
//     Generated by private class-dump
//

@protocol IESVSWatermarkService <NSObject>

@optional

- (id)createWatermarkWithData:(id)arg0 containerView:(id)arg1 markScene:(unsigned long long)arg2;
- (id)vsCreateWatermarkWithData:(id)arg0 containerView:(id)arg1 edgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 markScene:(unsigned long long)arg3;
- (void)saveWatermarkInfo:(id)arg0 seasonID:(id)arg1;
- (id)watermarkForLocalSave:(id)arg0;
- (void)deleteLocalWatermarkInfo:(id)arg0;

@end