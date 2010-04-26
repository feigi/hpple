//
//  TFHppleElement.h
//  Hpple
//
//  Created by Geoffrey Grosenbach on 1/31/09.
//
//  Copyright (c) 2009 Topfunky Corporation, http://topfunky.com
//
//  MIT LICENSE
//
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>


@interface TFHppleElement : NSObject {
	
@protected
	NSString				*name;
	NSString				*content;
	NSMutableDictionary	*attributes;
	NSMutableDictionary	*childNodes;
}

// Returns this tag's text which is not surounded by another tag
@property (nonatomic, copy) NSString *content;

// Returns the name of the current tag, such as "h3".
@property (nonatomic, copy) NSString	*name;

/** 
 * Returns tag attributes with name as key and content as value.
 * href  = 'http://peepcode.com'
 * class = 'highlight'
 */
@property (nonatomic, retain) NSMutableDictionary *attributes;

// Returns a dictionary of child nodes, which can be accessed via their tag name
@property (nonatomic, retain) NSMutableDictionary *childNodes;


@end
