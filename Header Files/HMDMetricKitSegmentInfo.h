//
//     Generated by private class-dump
//

@class NSString;

@interface HMDMetricKitSegmentInfo : NSObject {
    NSString *_binaryName;
    NSString *_binaryUUID;
    unsigned long long _startAddressBinaryTextSegment;
    unsigned long long _endAddressBinaryTextSegment;
    unsigned long long _anchorPoint;
}

@property (retain, nonatomic) NSString *binaryName;
@property (retain, nonatomic) NSString *binaryUUID;
@property (nonatomic) unsigned long long startAddressBinaryTextSegment;
@property (nonatomic) unsigned long long endAddressBinaryTextSegment;
@property (nonatomic) unsigned long long anchorPoint;

- (void)setBinaryName:(id)arg0;
- (void)setBinaryUUID:(id)arg0;
- (unsigned long long)startAddressBinaryTextSegment;
- (void)setStartAddressBinaryTextSegment:(unsigned long long)arg0;
- (unsigned long long)endAddressBinaryTextSegment;
- (void)setEndAddressBinaryTextSegment:(unsigned long long)arg0;
- (void)setAnchorPoint:(unsigned long long)arg0;
- (unsigned long long)anchorPoint;
- (void).cxx_destruct;
- (id)binaryName;
- (id)binaryUUID;

@end