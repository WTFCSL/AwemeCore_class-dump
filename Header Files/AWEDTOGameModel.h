//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOGameModel : MTLModel <MTLJSONSerializing> {
    BOOL _isGame;
    long long _type;
    long long _score;
}

@property (nonatomic) BOOL isGame;
@property (nonatomic) long long type;
@property (nonatomic) long long score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isGame;
- (void)setIsGame:(BOOL)arg0;
- (void)setScore:(long long)arg0;
- (long long)score;
- (long long)type;
- (void)setType:(long long)arg0;

@end
