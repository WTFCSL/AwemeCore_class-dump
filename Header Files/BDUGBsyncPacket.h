//
//     Generated by private class-dump
//

@class BDUGBsyncPayload, BDUGBsyncCursor, NSMutableDictionary;

@interface BDUGBsyncPacket : GPBMessage

@property (retain, nonatomic) BDUGBsyncCursor *cursor;
@property (nonatomic) BOOL hasCursor;
@property (retain, nonatomic) BDUGBsyncPayload *payload;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long ts;
@property (nonatomic) BOOL hasTs;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

- (id)payload;

@end
