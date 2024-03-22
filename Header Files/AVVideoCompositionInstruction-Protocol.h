//
//     Generated by private class-dump
//

@class NSArray;

@protocol AVVideoCompositionInstruction <NSObject>

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)enablePostProcessing;
- (BOOL)containsTweening;
- (id)requiredSourceTrackIDs;
- (int)passthroughTrackID;

@optional

- (id)requiredSourceSampleDataTrackIDs;

@end