//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface SAMICore_StyleConversionHttpResponsePayload : NSObject {
    NSString *_url;
    NSString *_vid;
    NSMutableArray *_warpingMapIn;
    NSMutableArray *_warpingMapOut;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSMutableArray *warpingMapIn;
@property (retain, nonatomic) NSMutableArray *warpingMapOut;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)warpingMapIn;
- (void)setWarpingMapIn:(id)arg0;
- (id)warpingMapOut;
- (void)setWarpingMapOut:(id)arg0;
- (void)setUrl:(id)arg0;
- (void)dealloc;
- (id)url;

@end