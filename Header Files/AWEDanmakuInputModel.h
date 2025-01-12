//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEDanmakuInputModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_itemID;
    long long _offsetTimeMS;
    long long _inputOffsetTimeMS;
    unsigned long long _danmakuTypeBits;
    NSString *_replyDanmakuID;
    NSMutableDictionary *_extraParams;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) long long offsetTimeMS;
@property (readonly, nonatomic) long long inputOffsetTimeMS;
@property (readonly, nonatomic) unsigned long long danmakuTypeBits;
@property (readonly, copy, nonatomic) NSString *replyDanmakuID;
@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (unsigned long long)danmakuTypeBits;
- (id)replyDanmakuID;
- (long long)offsetTimeMS;
- (long long)inputOffsetTimeMS;
- (void).cxx_destruct;
- (id)itemID;
- (id)text;

@end
