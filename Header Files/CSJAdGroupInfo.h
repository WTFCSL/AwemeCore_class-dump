//
//     Generated by private class-dump
//

@class NSString;

@interface CSJAdGroupInfo : NSObject <NSCoding> {
    NSString *_group_id;
    NSString *_group_tag;
    NSString *_card_tag;
}

@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *group_tag;
@property (copy, nonatomic) NSString *card_tag;

- (void)setGroup_id:(id)arg0;
- (void)setGroup_tag:(id)arg0;
- (void)setCard_tag:(id)arg0;
- (id)group_tag;
- (id)card_tag;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)group_id;

@end
