//
//     Generated by private class-dump
//

@interface VEColorspaceUtil : NSObject

+ (const struct __CFString { } *)colorTransitionFromAVColorSpace:(int)arg0;
+ (const struct __CFString { } *)colorMatrixFromAVColorSpace:(int)arg0;
+ (const struct __CFString { } *)colorPrimariesFromAVColorPrimaries:(int)arg0;
+ (BOOL)isFullcolorRangeFromAVColorRange:(int)arg0;
+ (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)arg0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })arg1;
+ (long long)veTransferFunctionFromAVTransferCharacteristic:(int)arg0;
+ (void)restoreColorInfoToPixelBuffer:(struct __CVBuffer { } *)arg0 colorInfo:(struct tagSTEColorInfo { struct _EnumWrap<int> { int x0; } x0; struct _EnumWrap<int> { int x0; } x1; struct _EnumWrap<int> { int x0; } x2; struct _EnumWrap<int> { int x0; } x3; int x4; })arg1;
+ (int)avColorPrimariesFromVEColorPrimaries:(long long)arg0;
+ (int)avTransferCharacteristicFromVEColorTransferFunction:(long long)arg0;
+ (int)avColorspaceFromVEColorMatrix:(long long)arg0;
+ (void)restoreColorInfoToSampleData:(id)arg0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })arg1;
+ (void)restoreColorInfoToPipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })arg0 sampleData:(id)arg1;
+ (void)restoreColorSpaceToColorInfo:(void *)arg0 colorSpaceInfo:(id)arg1;
+ (struct tagSTEColorInfo { struct _EnumWrap<int> { int x0; } x0; struct _EnumWrap<int> { int x0; } x1; struct _EnumWrap<int> { int x0; } x2; struct _EnumWrap<int> { int x0; } x3; int x4; })colorInfoFromPixelBuffer:(struct __CVBuffer { } *)arg0;
+ (long long)veTransferFunctionFromFormatDesc:(struct __CFString { } *)arg0;
+ (long long)veColorPrimariesFromFormatDesc:(struct __CFString { } *)arg0;
+ (long long)veMatrixFromFormatDesc:(struct __CFString { } *)arg0;
+ (id)colorspaceInfoFromConfigData:(id)arg0;
+ (void)restoreHDRMetadataToSampleData:(id)arg0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })arg1;
+ (void)restoreHDRMetadataToPixelBuffer:(struct __CVBuffer { } *)arg0 pipeline:(struct shared_ptr<core::TEVideoPipeline> { struct TEVideoPipeline *x0; struct __shared_weak_count *x1; })arg1;
+ (struct TEHDRMetadata { struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x0; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })hdrMetadataFromPixelBuffer:(struct __CVBuffer { } *)arg0;
+ (id)generateContentLightLevelInfo:(float)arg0 maxFrameAverageLightLevel:(float)arg1;
+ (id)generateMasteringDisplayColorVolume:(float)arg0 rY:(float)arg1 gX:(float)arg2 gY:(float)arg3 bX:(float)arg4 bY:(float)arg5 whiteX:(float)arg6 whiteY:(float)arg7 luminanceMin:(float)arg8 luminanceMax:(float)arg9;

@end