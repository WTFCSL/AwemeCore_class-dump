//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveNoticeUploadCoverAlertModel : NSObject {
    long long _msgType;
    NSString *_title;
    NSString *_content;
    NSString *_tipURL;
    NSString *_tipTitle;
}

@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *tipURL;
@property (copy, nonatomic) NSString *tipTitle;

- (id)tipURL;
- (void)setTipURL:(id)arg0;
- (id)initWithTitle:(id)arg0 content:(id)arg1 msgType:(long long)arg2 tipURL:(id)arg3 tipTitle:(id)arg4;
- (void)setTipTitle:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)tipTitle;
- (id)initWithTitle:(id)arg0 content:(id)arg1;
- (long long)msgType;
- (void)setMsgType:(long long)arg0;

@end
