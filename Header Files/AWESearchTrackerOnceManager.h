//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWESearchTrackerOnceManager : NSObject {
    NSMutableDictionary *_recordMap;
}

@property (retain, nonatomic) NSMutableDictionary *recordMap;

- (BOOL)hasRecordWithUniqueID:(id)arg0;
- (void)addRecordWithUniqueID:(id)arg0;
- (void).cxx_destruct;
- (id)recordMap;
- (void)clear;
- (id)description;
- (void)setRecordMap:(id)arg0;

@end
