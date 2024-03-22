//
//     Generated by private class-dump
//

@class NSDictionary;

@interface LynxPerformance : NSObject {
    NSDictionary *_dic;
}

@property (readonly, nonatomic) BOOL hasActualFMP;
@property (readonly, nonatomic) double actualFMPDuration;
@property (readonly, nonatomic) double actualFirstScreenEndTimeStamp;

+ (id)toPerfKey:(int)arg0 isSsrHydrate:(BOOL)arg1;
+ (id)toPerfKey:(int)arg0;
+ (id)toPerfStampKey:(int)arg0;

- (id)initWithPerformance:(id)arg0 url:(id)arg1 pageType:(id)arg2 reactVersion:(id)arg3;
- (BOOL)hasActualFMP;
- (double)actualFMPDuration;
- (double)actualFirstScreenEndTimeStamp;
- (void).cxx_destruct;
- (id)toDictionary;

@end
