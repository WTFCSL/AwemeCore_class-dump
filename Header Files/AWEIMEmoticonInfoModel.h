//
//     Generated by private class-dump
//

@class NSString, AWEIMEmojiAuthor, NSURL, NSNumber;

@interface AWEIMEmoticonInfoModel : NSObject <AWEIMEmoticonInfoModelProtocol> {
    BOOL _userSelected;
    long long _themeStyle;
    NSNumber *_identifier;
    NSNumber *_version;
    NSString *_displayName;
    NSURL *_displayIconURL;
    NSString *_remoteURL;
    NSString *_descrip;
    AWEIMEmojiAuthor *_author;
    NSString *_uniqueId;
}

@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *displayIconURL;
@property (copy, nonatomic) NSString *remoteURL;
@property (copy, nonatomic) NSString *descrip;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL userSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThemeStyle:(long long)arg0;
- (id)displayIconURL;
- (void)setDisplayIconURL:(id)arg0;
- (id)descrip;
- (void)setDescrip:(id)arg0;
- (BOOL)userSelected;
- (void)setUserSelected:(BOOL)arg0;
- (id)accessibilityLabel;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void)setVersion:(id)arg0;
- (id)remoteURL;
- (void).cxx_destruct;
- (void)setDisplayName:(id)arg0;
- (id)identifier;
- (id)displayName;
- (id)author;
- (id)version;
- (void)setAuthor:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (long long)themeStyle;
- (void)setRemoteURL:(id)arg0;

@end
