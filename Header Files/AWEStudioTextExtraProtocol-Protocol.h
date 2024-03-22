//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEStudioTextExtraProtocol <NSObject, ACCTextExtraProtocol>

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long captionStart;
@property (nonatomic) long long captionEnd;
@property (copy, nonatomic) NSString *hotSpotText;
@property (copy, nonatomic) NSString *hotSpotId;

- (id)hotSpotText;
- (void)setHotSpotText:(id)arg0;
- (id)hotSpotId;
- (void)setHotSpotId:(id)arg0;
- (long long)captionStart;
- (void)setCaptionStart:(long long)arg0;
- (long long)captionEnd;
- (void)setCaptionEnd:(long long)arg0;
- (void)setEnd:(long long)arg0;
- (long long)end;
- (void)setStart:(long long)arg0;
- (void)setLength:(long long)arg0;
- (long long)type;
- (long long)length;
- (id)userId;
- (void)setType:(long long)arg0;
- (long long)start;
- (void)setUserId:(id)arg0;

@end
