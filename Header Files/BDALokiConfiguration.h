//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@interface BDALokiConfiguration : NSObject {
    BOOL _removeInDwongrade;
    NSDictionary *_accessKeyDics;
    NSDictionary *_customTrackData;
    long long _widthMode;
    long long _heightMode;
    NSArray *_extraJSPaths;
}

@property (copy, nonatomic) NSDictionary *accessKeyDics;
@property (copy, nonatomic) NSDictionary *customTrackData;
@property (nonatomic) BOOL removeInDwongrade;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (copy, nonatomic) NSArray *extraJSPaths;

- (void)setWidthMode:(long long)arg0;
- (void)setHeightMode:(long long)arg0;
- (id)customTrackData;
- (id)accessKeyDics;
- (id)extraJSPaths;
- (void)setExtraJSPaths:(id)arg0;
- (long long)widthMode;
- (long long)heightMode;
- (BOOL)removeInDwongrade;
- (void)setAccessKeyDics:(id)arg0;
- (void)setCustomTrackData:(id)arg0;
- (void)setRemoveInDwongrade:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
