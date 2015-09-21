//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMutableArray, NSMutableData;

@interface DVTSimpleXMLWriter : NSObject
{
    NSMutableData *_xmlData;
    NSMutableArray *_openContainers;
    long long _indentationLevel;
    BOOL _isInsideTag;
    BOOL _isInsideContainerTag;
}

- (void).cxx_destruct;
- (id)stringValue;
- (id)data;
- (void)finishWriting;
- (void)writeContent:(id)arg1;
- (void)writeContent:(id)arg1 withIndentation:(BOOL)arg2;
- (void)writeContent:(id)arg1 withIndentation:(BOOL)arg2 withNewline:(BOOL)arg3;
- (void)endContainer;
- (void)endContainerWithNewline:(BOOL)arg1;
- (void)endStartTag;
- (void)endStartTagWithNewline:(BOOL)arg1;
- (char *)_endStartTagString;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)beginStartTag:(id)arg1;
- (void)beginStartTag:(id)arg1 isContainer:(BOOL)arg2;
- (void)writeRawUTF8:(const char *)arg1;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)writeXMLEpilogue;
- (void)writeXMLPrologue;

@end

