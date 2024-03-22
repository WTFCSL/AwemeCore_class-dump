//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface AWEDynamicCardStats : NSObject <NSCoding, AWEDynamicCardStatsProtocol> {
    NSDictionary *localStats;
    NSDictionary *stats;
    NSString *scene;
    NSString *awemeID;
    double lastSelectTimestamp;
    NSMutableArray *poiIDs;
    NSNumber *isDislike;
    NSNumber *isSkip;
}

@property (copy, nonatomic) NSDictionary *localStats;
@property (copy, nonatomic) NSDictionary *stats;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) double lastSelectTimestamp;
@property (retain, nonatomic) NSNumber *isDislike;
@property (retain, nonatomic) NSNumber *isSkip;
@property (retain, nonatomic) NSMutableArray *poiIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)isSkip;
- (void)setIsSkip:(id)arg0;
- (void)setPoiIDs:(id)arg0;
- (void)setIsDislike:(id)arg0;
- (void)setLastSelectTimestamp:(double)arg0;
- (double)lastSelectTimestamp;
- (id)isDislike;
- (id)poiIDs;
- (id)localStats;
- (void)setLocalStats:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)debugInfo;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)stats;
- (id)scene;
- (void)setStats:(id)arg0;

@end