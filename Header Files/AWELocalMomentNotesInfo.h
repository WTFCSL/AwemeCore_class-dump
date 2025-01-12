//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELocalMomentNotesInfo : AWEBaseApiModel {
    BOOL _hasDigged;
    BOOL _isDraft;
    NSString *_itemId;
    NSString *_text;
    NSNumber *_createTime;
    NSNumber *_textTTL;
}

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasDigged;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *textTTL;
@property (nonatomic) BOOL isDraft;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasDigged;
- (void)setHasDigged:(BOOL)arg0;
- (id)textTTL;
- (void)setTextTTL:(id)arg0;
- (BOOL)isDraft;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setCreateTime:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)createTime;
- (id)text;
- (BOOL)isEqual:(id)arg0;
- (void)setIsDraft:(BOOL)arg0;
- (id)itemId;
- (void)setItemId:(id)arg0;

@end
