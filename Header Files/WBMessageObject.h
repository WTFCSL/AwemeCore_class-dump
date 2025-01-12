//
//     Generated by private class-dump
//

@class NSString, WBImageObject, WBNewVideoObject, WBWeiyouObject, WBBaseMediaObject, WBSuperGroupObject;

@interface WBMessageObject : NSObject {
    NSString *text;
    WBImageObject *imageObject;
    WBBaseMediaObject *mediaObject;
    WBNewVideoObject *videoObject;
    WBWeiyouObject *weiyouObject;
    WBSuperGroupObject *superTopicObject;
}

@property (retain, nonatomic) WBWeiyouObject *weiyouObject;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) WBImageObject *imageObject;
@property (retain, nonatomic) WBBaseMediaObject *mediaObject;
@property (retain, nonatomic) WBNewVideoObject *videoObject;
@property (retain, nonatomic) WBSuperGroupObject *superTopicObject;

+ (id)dictionaryWithMessage:(id)arg0;
+ (id)messageWithDictionary:(id)arg0;
+ (id)message;

- (id)imageObject;
- (id)videoObject;
- (id)weiyouObject;
- (id)superTopicObject;
- (void)setImageObject:(id)arg0;
- (void)setVideoObject:(id)arg0;
- (void)setWeiyouObject:(id)arg0;
- (void)setSuperTopicObject:(id)arg0;
- (id)validate;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)mediaObject;
- (void)setMediaObject:(id)arg0;

@end
