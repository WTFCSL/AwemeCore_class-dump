//
//     Generated by private class-dump
//

@interface TVLPlayerItemAccessLogVideoBitrateSwitchEvent : TVLPlayerItemLogEvent {
    long long _fromBitrate;
    long long _toBitrate;
}

@property (readonly, nonatomic) long long fromBitrate;
@property (readonly, nonatomic) long long toBitrate;

- (long long)toBitrate;
- (void)bitrateDidSwitchFrom:(long long)arg0 to:(long long)arg1;
- (long long)fromBitrate;

@end