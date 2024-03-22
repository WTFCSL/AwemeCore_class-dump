//
//     Generated by private class-dump
//

@class HTSLiveText, NSString, HTSLiveUser, NSAttributedString;

@interface IESLiveMessageReplyTreeNode : NSObject {
    BOOL _isDigged;
    BOOL _selected;
    long long _msgId;
    NSString *_method;
    HTSLiveUser *_user;
    HTSLiveText *_displayText;
    NSString *_content;
    NSAttributedString *_attributedText;
    NSString *_copiedContent;
    double _heightWithOperationPanel;
    double _heightWithoutOperationPanel;
}

@property (nonatomic) long long msgId;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSString *copiedContent;
@property (nonatomic) BOOL isDigged;
@property (nonatomic) BOOL selected;
@property (nonatomic) double heightWithOperationPanel;
@property (nonatomic) double heightWithoutOperationPanel;

- (void)setIsDigged:(BOOL)arg0;
- (BOOL)isDigged;
- (double)heightWithOperationPanel;
- (double)heightWithoutOperationPanel;
- (void)setHeightWithOperationPanel:(double)arg0;
- (void)setHeightWithoutOperationPanel:(double)arg0;
- (id)copiedContent;
- (void)setCopiedContent:(id)arg0;
- (void)setUser:(id)arg0;
- (BOOL)selected;
- (id)attributedText;
- (id)user;
- (void).cxx_destruct;
- (id)method;
- (void)setAttributedText:(id)arg0;
- (void)setMethod:(id)arg0;
- (id)displayText;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setDisplayText:(id)arg0;
- (long long)msgId;
- (void)setMsgId:(long long)arg0;

@end