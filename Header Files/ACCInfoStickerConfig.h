//
//     Generated by private class-dump
//

@class NSString;

@interface ACCInfoStickerConfig : ACCCommonStickerConfig {
    BOOL _isImageAlbum;
    BOOL _pinable;
    NSString *_effectIdentifier;
    long long _type;
    id /* block */ _selectTime;
    id /* block */ _pinAction;
}

@property (copy, nonatomic) NSString *effectIdentifier;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isImageAlbum;
@property (copy, nonatomic) id /* block */ selectTime;
@property (copy, nonatomic) id /* block */ pinAction;
@property (nonatomic, getter=isPinable) BOOL pinable;

- (BOOL)isImageAlbum;
- (id)bubbleActionList;
- (void)setIsImageAlbum:(BOOL)arg0;
- (void)setPinable:(BOOL)arg0;
- (BOOL)isPinable;
- (id /* block */)pinAction;
- (void)setPinAction:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)effectIdentifier;
- (void)setEffectIdentifier:(id)arg0;
- (id /* block */)selectTime;
- (void)setSelectTime:(id /* block */)arg0;

@end
