//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELiveStickerAvatarListModel : MTLModel <MTLJSONSerializing> {
    NSArray *_avatarArray;
}

@property (retain, nonatomic) NSArray *avatarArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAvatarArray:(id)arg0;
- (id)avatarArray;
- (void).cxx_destruct;

@end
