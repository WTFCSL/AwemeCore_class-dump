//
//     Generated by private class-dump
//

@class NSString;

@interface NLEResourceAV_OC : NLEResourceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEResourceAV> { struct NLEResourceAV *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *fileInfo;
@property (nonatomic) BOOL hasAudio;

+ (id)videoResourceWithAsset:(id)arg0 nle:(id)arg1;
+ (id)audioResourceWithAsset:(id)arg0 nle:(id)arg1;

- (void)dve_setupForVideo:(id)arg0 resourceFilePath:(id)arg1;
- (void)dve_setupForPhoto:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg3;
- (void)dve_setupForMedia:(id)arg0 type:(unsigned long long)arg1;
- (void)dve_setupForVideo:(id)arg0;
- (void)dve_setupForPhoto:(id)arg0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)dve_setupForAudio:(id)arg0;
- (void)dve_setupForRecord:(id)arg0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceAV> { struct NLEResourceAV *x0; struct __shared_weak_count *x1; })arg0;
- (id)fileInfo;
- (void)setFileInfo:(id)arg0;
- (void)p_setupForVideoWithAsset:(id)arg0 draftFolder:(id)arg1;
- (id)init;
- (BOOL)hasAudio;
- (void)setHasAudio:(BOOL)arg0;

@end