//
//     Generated by private class-dump
//

@class NSString;

@interface AFDPineappleLocalRedPacketInfo : NSObject <NSCoding> {
    BOOL _commented;
    BOOL _autoOpened;
    NSString *_awemeID;
    unsigned long long _status;
}

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL commented;
@property (nonatomic) BOOL autoOpened;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)initWithAwemeID:(id)arg0;
- (BOOL)commented;
- (BOOL)autoOpened;
- (void)setCommented:(BOOL)arg0;
- (void)setAutoOpened:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;

@end