//
//     Generated by private class-dump
//

@class HMDCrashVMRegion, HMDCrashBinaryImage, HMDCrashAddressObjectInfo, NSString, HMDCrashSection, HMDCrashSegment;

@interface HMDCrashAddressAnalysis : HMDCrashModel {
    unsigned long long _value;
    HMDCrashBinaryImage *_image;
    HMDCrashSegment *_segment;
    HMDCrashSection *_section;
    HMDCrashVMRegion *_regionInfo;
    HMDCrashAddressObjectInfo *_objectInfo;
    NSString *_stringInfo;
}

@property (nonatomic) unsigned long long value;
@property (retain, nonatomic) HMDCrashBinaryImage *image;
@property (retain, nonatomic) HMDCrashSegment *segment;
@property (retain, nonatomic) HMDCrashSection *section;
@property (retain, nonatomic) HMDCrashVMRegion *regionInfo;
@property (retain, nonatomic) HMDCrashAddressObjectInfo *objectInfo;
@property (copy, nonatomic) NSString *stringInfo;

- (void)setObjectInfo:(id)arg0;
- (void)setStringInfo:(id)arg0;
- (id)objectInfo;
- (id)stringInfo;
- (id)postDict;
- (id)segment;
- (void)updateWithDictionary:(id)arg0;
- (void)setSegment:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)value;
- (id)image;
- (void)setSection:(id)arg0;
- (id)regionInfo;
- (void)setImage:(id)arg0;
- (void)setValue:(unsigned long long)arg0;
- (id)section;
- (void)setRegionInfo:(id)arg0;

@end
