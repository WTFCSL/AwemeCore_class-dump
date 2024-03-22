//
//     Generated by private class-dump
//

@class NSString, AWESafeMutableArray;

@interface AWEInputTextCutManager : HTSService <AWEInputTextCutManager> {
    BOOL _allowCommit;
    BOOL _deleteInsert;
    NSString *_enterFrom;
    NSString *_currentString;
    AWESafeMutableArray *_wordsList;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentString;
@property (retain, nonatomic) AWESafeMutableArray *wordsList;
@property (nonatomic) BOOL allowCommit;
@property (nonatomic) BOOL deleteInsert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)onServiceInit;
- (id)enterFrom;
- (void)beginEditing:(id)arg0 enterFrom:(id)arg1;
- (void)commitTracker:(id)arg0;
- (id)wordsList;
- (void)setWordsList:(id)arg0;
- (void)setCurrentString:(id)arg0;
- (void)setAllowCommit:(BOOL)arg0;
- (void)setDeleteInsert:(BOOL)arg0;
- (BOOL)deleteInsert;
- (BOOL)allowCommit;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg0;
- (id)currentString;

@end
